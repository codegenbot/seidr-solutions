def double_the_difference():
    def diff(l):
        if len(l) < 2:
            return l[0] if l else None
        half = len(l) // 2
        return abs(l[half-1] - l[half])

    return lambda x: [i*2 for i in x] if diff(x) % 2 == 0 else [abs(i) for i in x]

print(check([1, 2, 3], double_the_difference()))