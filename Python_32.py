def find_zero():
    xs = []
    while True:
        try:
            line = input().strip()
            if not line:
                break
            xs.extend(map(float, line.split()))
        except (EOFError, KeyboardInterrupt):
            break
        except Exception as e:
            print(f"Error: {e}")
    a = xs[-2]
    b = xs[-1]
    return -b / a

result = find_zero()
print(result)