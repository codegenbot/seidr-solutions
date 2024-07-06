def check(encode, message, expected):
    key = "ThisIsTheKey"
    result = encode(key, message)
    if result == expected:
        print("Test passed!")
    else:
        print("Test failed!")