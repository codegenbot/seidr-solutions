def solution(lst):
    odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    even_average = sum(i for i in lst if i % 2 == 0) / len(
        [i for i in lst if i % 2 == 0]
    )
    return {"odd_sum": odd_sum, "even_average": even_average}