def check(func):
    assert func(['apple', 'banana', 'apricot'], 'ap') == ['apple', 'apricot']
    assert func(['apple', 'banana', 'apricot'], 'ba') == ['banana']
    assert func(['carrot', 'car', 'cat'], 'car') == ['carrot', 'car']
    assert func(['dog', 'deer', 'deal'], 'de') == ['deer', 'deal']
    assert func(['', 'empty', 'emptiness'], 'em') == ['empty', 'emptiness']
    print("All tests passed!")

def filter_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

result = filter_by_prefix(['apple', 'banana', 'apricot'], 'ap')
print(result)

check(filter_by_prefix)