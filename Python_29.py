def check(function):
    test_strings = ['apple', 'banana', 'apricot']
    prefix = 'ap'
    result = function(test_strings, prefix)
    expected_result = ['apple', 'apricot']
    assert result == expected_result, f"Expected {expected_result}, got {result}"

def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Example call to the function
result = filter_strings_by_prefix(['apple', 'banana', 'apricot'], 'ap')
print(result)  # Example output: ['apple', 'apricot']

check(filter_strings_by_prefix)