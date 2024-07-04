def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Example call to the function
result = filter_strings_by_prefix(['apple', 'banana', 'apricot'], 'ap')
print(result)  # Example output: ['apple', 'apricot']

# Replace the incorrect function name with the right one
def check(func):
    assert func(['apple', 'banana', 'apricot'], 'ap') == ['apple', 'apricot']
    assert func(['test', 'text', 'testing'], 'te') == ['test', 'text', 'testing']
    assert func(['dog', 'cat', 'rabbit'], 'ra') == ['rabbit']
    print("All checks passed.")

check(filter_strings_by_prefix)