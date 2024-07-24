def longest(*strings):
    result = []
    while True:
        s = input("Enter a string (or 'stop' to finish): ")
        if s.lower() == 'stop':
            break
        result.append(s)
    print(max(result, key=len) if result else None)