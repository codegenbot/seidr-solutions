[PYTHON]
def get_hash(text):
    # Create a new hash context
    ctx = EVP_MD_CTX_new()
    if not ctx:
        return None

    # Set the digest type to MD5
    EVP_DigestInit(ctx, EVP_md5())

    # Update the digest with the input text
    EVP_DigestUpdate(ctx, text.encode(), len(text))

    # Finalize the digest and get the result
    md = EVP_DigestFinal(ctx)

    # Print the resulting hash
    print("Hash:", md.hex())

    return md
[/PYTHON]
[TESTS]
# Test case 1:
assert get_hash("password") == b"5f4dcc3b5aa765d61d8327deb882cf99"
# Test case 2:
assert get_hash("hello world") == b"b10a8db164e0754105b7a99be72e3fe5"
[/TESTS]
