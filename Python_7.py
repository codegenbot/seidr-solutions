def filter_strings(strings, substring):
    return [s for s in strings if substring in s]  
    check = filter_strings(strings=["apple", "banana", "cherry", "date"], substring="e")
    print(check)