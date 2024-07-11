```Python
def longest():
    inputs = []
    while True:
        user_input = input("Enter a string (or 'stop' if you're done): ")
        if user_input.lower() == 'stop':
            break
        inputs.append(user_input)

    if not inputs:
        return None
    return max(inputs, key=len)