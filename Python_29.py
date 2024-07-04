def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Example call to the function
result = filter_strings_by_prefix(['apple', 'banana', 'apricot'], 'ap')
print(result)  # Example output: ['apple', 'apricot']

# Example check function definition (to be replaced with actual function)
def check(func):
    test_strings = ['apple', 'banana', 'apricot']
    assert func(test_strings, 'ap') == ['apple', 'apricot']
    assert func(test_strings, 'ba') == ['banana']
    assert func(test_strings, 'ca') == []

check(filter_strings_by_prefix)