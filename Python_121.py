def solution(lst):
    odd_sum = sum(int(d) for d in "".join(map(str, lst)) if int(d) % 2 != 0)
    even_sum = sum(int(d) for d in "".join(map(str, lst)) if int(d) % 2 == 0)
    return f"Odd: {odd_sum}, Even: {even_sum}"