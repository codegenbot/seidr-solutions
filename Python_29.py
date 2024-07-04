def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Example call to the function
result = filter_strings_by_prefix(['apple', 'banana', 'apricot'], 'ap')
print(result)  # Example output: ['apple', 'apricot']

# Replace the incorrect function name with the right one
def check(func):
    test_strings = ['apple', 'banana', 'apricot']
    prefix = 'ap'
    expected_result = ['apple', 'apricot']
    assert func(test_strings, prefix) == expected_result
    print("Function works correctly")

check(filter_strings_by_prefix)