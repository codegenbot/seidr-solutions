def find_pair(n):
    pairs = []
    for i in range(int(input())):
        a = list(map(int, input().split()))
        a.sort()
        left, right = 0, len(a) - 1
        while left < right:
            current_sum = a[left] + a[right]
            if current_sum == int(input()):
                pairs.append((a[left], a[right]))
                break
            elif current_sum < int(input()):
                left += 1
            else:
                right -= 1
    return (
        "\n".join(map(str, [pair[0] for pair in pairs])) + "\n" + str(n)
        if len(pairs) == n
        else "No solution exists"
    )