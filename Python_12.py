def longest(*strings):
    result = max(strings, key=len) 
    print(result)