def parse_music(music_input):
    stack = []
    for note in music_input:
        if note == '(':
            stack.append('(')
        elif note == ')':
            if stack and stack[-1] == '(':
                stack.pop()
            else:
                return False
    return len(stack) == 0

while True:
    try:
        music_input = input().rstrip()
        if music_input == '':
            break
        result = parse_music(music_input)
        print(result)
    except EOFError:
        break