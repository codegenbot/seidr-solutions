def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Example call to the function
result = filter_strings_by_prefix(['apple', 'banana', 'apricot'], 'ap')
print(result)  # Example output: ['apple', 'apricot']

def check(filter_func):
    # Example check (adjust according to the actual check requirements)
    assert filter_func(['apple', 'banana', 'apricot'], 'ap') == ['apple', 'apricot']
    print("Check passed")

# Using the check function
check(filter_strings_by_prefix)