values = []
while True:
    try:
        user_input = input()
        if not user_input:
            break
        values = list(map(int, user_input.split()))
        break
    except ValueError:
        pass