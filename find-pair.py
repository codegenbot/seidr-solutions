def find_pair(n):
    s = []
    for _ in range(n):
        while True:
            try:
                a = int(input())
                s.append(a)
                break
            except ValueError:
                print("Invalid input, please enter an integer.")
    s.sort()
    left, right = 0, len(s) - 1
    while left < right:
        total = s[left] + s[right]
        if total == 0:
            print(f"{s[left]} {s[right]}")
            return
        elif total > 0:
            right -= 1
        else:
            left += 1