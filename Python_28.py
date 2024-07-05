def concatenate_strings(strings):
    return "".join(strings)

def check(func):
    # Example test case
    print(func(['hello', 'world']))  # Should print 'helloworld'

check(concatenate_strings)