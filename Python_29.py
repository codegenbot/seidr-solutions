def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

def check(func):
    # Example test cases
    assert func(['apple', 'banana', 'apricot'], 'ap') == ['apple', 'apricot']
    assert func(['apple', 'apricot', 'banana', 'apex'], 'ap') == ['apple', 'apricot', 'apex']
    assert func(['apple', 'banana', 'mango'], 'ba') == ['banana']
    assert func(['apple', 'banana', 'mango'], 'ca') == []

# Example call to the function
result = filter_strings_by_prefix(['apple', 'banana', 'apricot'], 'ap')
print(result)  # Example output: ['apple', 'apricot']

check(filter_strings_by_prefix)