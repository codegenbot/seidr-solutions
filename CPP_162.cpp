#include <openssl/ssl.h>
#include <openssl/mem.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[1024];
    SSL_CTX *ctx = SSL_CTX_new(TLS_client_method());
    SSL *ssl = SSL_new(ctx);
    BIO *bio = BIO_new_mem_buf((void *)text.c_str(), text.length());
    BIO_set_ttl(bio, 0);
    BIO_set_read_buffer(bio, "read", buffer, 1024);

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx_md5;
    MD5_Init(&ctx_md5);
    while (BIO_read(bio, &buffer, 1) > 0) {
        MD5_Update(&ctx_md5, buffer, 1);
    }
    MD5_Final(md, &ctx_md5);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buff[3];
        sprintf(buff, "%02x", md[i]);
        result += buff;
    }

    BIO_free_all(bio);
    SSL_free(ssl);
    SSL_CTX_free(ctx);

    return result;
}