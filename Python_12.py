def longest(*strings):
    result_strings = [] 
    while True:
        s = input("Enter a string (or 'stop' to finish): ")
        if s.lower() == 'stop':
            break
        result_strings.append(s)
    return len(max(result_strings, key=len)) if result_strings else None