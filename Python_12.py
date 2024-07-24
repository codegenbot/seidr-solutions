def longest(*strings):
    result_strings = [] 
    while True:
        s = input("Enter a string (or 'stop' to finish): ")
        if s.lower() == 'stop':
            break
        print(s)  
        result_strings.append(s)
    result = max(result_strings, key=len) if result_strings else None
    print(result)
    
longest()