[PYTHON]
def split_string(string, delimiter):
    words = []
    start = 0
    end = 0
    while end != -1:
        end = string.find(delimiter, start)
        if end == -1:
            words.append(string[start:])
        else:
            words.append(string[start:end])
        start = end + 1
    return words

def to_camel_case(string):
    words = split_string(string, '-')
    for i in range(len(words)):
        if words[i] == '':
            continue
        words[i] = words[i].capitalize()
    return ''.join(words)
[/PYTHON]
[TESTS]
# Test case 1:
assert to_camel_case('') == ''
# Test case 2:
assert to_camel_case('hello-world') == 'HelloWorld'
# Test case 3:
assert to_camel_case('the-quick-brown-fox') == 'TheQuickBrownFox'
[/TESTS]
