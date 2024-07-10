#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char buffer[1024];
    unsigned int len = 0;
    const EVP_MD* md = EVP_md5();
    EVP_MD_CTX ctx;
    unsigned char hash[16];
    
    // Create the context for the MD5 operation
    EVP_MD_CTX_init(&ctx);
    EVP_DigestInit_ex(&ctx, md, NULL);
    
    // Add the text to the context
    len = (unsigned int)text.length();
    EVP_EncodeUpdate(buffer, &len, (const unsigned char*)text.c_str(), text.length());
    
    // Finalize the MD5 operation and get the hash
    EVP_DigestFinal_ex(&ctx, buffer, &len);
    EVP_MD_CTX_cleanup(&ctx);
    
    // Convert the hash to a string for return
    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)buffer[i];
    }
    
    return ss.str();
}