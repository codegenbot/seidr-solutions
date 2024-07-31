#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md[16];
    EVP_MD_CTX md_ctx;
    EVP_PKEY_CTX *pctx = NULL;
    EVP_MD *mdalg = NULL;

    // Initialize the EVP context
    pctx = EVP_PKEY_CTX_new_id(EVP_MD_ALG_ID_md5(), NULL);
    if (pctx == NULL) return "None";
    
    // Set the input message
    EVP_PKEY_CTX_set_string(pctx, text.c_str());
    
    // Calculate the MD5 hash
    EVP_PKEY_CTX_ctrls(pctx, 1);
    EVP_DigestInit_ex(&md_ctx, pctx, NULL);
    EVP_DigestUpdate(&md_ctx, (unsigned char*)text.c_str(), text.length());
    EVP_DigestFinal_ex(&md_ctx, md, NULL);

    // Convert the hash to hexadecimal
    string result = "";
    for (int i = 0; i < 16; i++) {
        sprintf(&result[2*i], "%02x", md[i]);
    }

    return result;
}