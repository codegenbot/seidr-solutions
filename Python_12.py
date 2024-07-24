```
def longest(*strings):
    result = max(strings, key=len) 
    print(result)

longest("hello", "world", "this", "is", "a", "test")