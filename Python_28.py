def check(concatenate_strings):
    strings = ["Hello", "World"]
    result = concatenate_strings(strings)
    if result == "HelloWorld":
        print("Test passed")
    else:
        print("Test failed")

check(concatenate_strings)