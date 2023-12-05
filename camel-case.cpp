[PYTHON]
def get_camel_case(my_string):
    my_string = my_string.title()
    my_string = my_string.replace(" ", "")
    return my_string
[/PYTHON]
[TESTS]
# Test case 1:
assert get_camel_case("") == ""
# Test case 2:
assert get_camel_case("hello world") == "HelloWorld"
# Test case 3:
assert get_camel_case("the quick brown fox") == "TheQuickBrownFox"
[/TESTS]
