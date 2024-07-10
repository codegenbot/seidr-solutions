values = []
while True:
    try:
        user_input = input()
        if not user_input:
            break
        values.extend(list(map(int, user_input.split())))
    except ValueError:
        pass