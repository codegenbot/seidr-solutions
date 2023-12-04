[PYTHON]
def get_camel_case(s):
    words = s.split('-')
    for i in range(len(words)):
        if i > 0:
            words[i] = words[i].title()
    return ' '.join(words)
[/PYTHON]
[TESTS]
# Test case 1:
assert get_camel_case('') == ''
# Test case 2:
assert get_camel_case('camel-case') == 'Camel Case'
# Test case 3:
assert get_camel_case('example-test-string') == 'Example Test String'
[/TESTS]
