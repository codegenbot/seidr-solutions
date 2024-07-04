def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Example call to the function
result = filter_strings_by_prefix(['apple', 'banana', 'apricot'], 'ap')
print(result)  # Example output: ['apple', 'apricot']

# Assuming the check function call is expected
def check(func):
    # Dummy check function for illustration
    test_strings = ['apple', 'banana', 'apricot', 'anchor']
    expected_output = ['apple', 'apricot', 'anchor']
    assert func(test_strings, 'a') == expected_output, "Test failed!"
    print("Test passed!")

check(filter_strings_by_prefix)