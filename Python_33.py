`return [
        (
            sorted([x for x in l[i//3*3+min(i%3,3-1):] if x % 3 == 0])[::-1]
            if i % 3 != 0
            else i
        )
        for i in range(len(l))
    ]`