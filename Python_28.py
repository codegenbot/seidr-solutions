def concatenate_strings(strings):
    return "".join(strings)

def check(concatenate_strings):
    assert concatenate_strings(["Hello", " ", "World"]) == "Hello World"
    assert concatenate_strings(["Python", "3", ".", "8"]) == "Python3.8"
    assert concatenate_strings(["Concatenate", " ", "these", " ", "strings"]) == "Concatenate these strings"
    print("All tests passed.")

check(concatenate_strings)