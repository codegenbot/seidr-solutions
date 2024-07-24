def longest(*strings):
    result = max(strings + (*[input("Enter a string (or 'stop' to finish): ") for _ in range(100)]), key=len) if strings else None
    print(result)