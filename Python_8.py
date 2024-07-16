while True:
    try:
        numbers_input = list(map(int, input().strip().split()))
        if len(numbers_input) < 2:
            continue
        print(sum(numbers_input), numbers_input[0] * numbers_input[1])
    except ValueError:
        break
except EOFError:
    pass