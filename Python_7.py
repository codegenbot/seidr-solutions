def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

def check(func):
    return func

check(filter_strings)