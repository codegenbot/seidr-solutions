def sort_third(l: list):
    zeros = [i for i in l if i % 3 == 0]
    return [i if i % 3 != 0 else sorted(zeros)[len(zeros) // 2] for i in l]