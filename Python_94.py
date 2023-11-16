

def skjkasdkd(lst):
    return sum(map(int, str(max(filter(lambda x: all(x % i for i in range(2, x)), lst)))))
