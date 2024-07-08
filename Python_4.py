import statistics


def mean_absolute_deviation(lst):
    return statistics.mean([abs(x - statistics.mean(lst)) for x in lst])


print(
    mean_absolute_deviation(
        list(map(int, input("Enter numbers separated by space: ").split()))
    )
)