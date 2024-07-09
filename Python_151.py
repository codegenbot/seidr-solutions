def check(f):
    def g(lst):
        pos = [i for i in lst if isinstance(i, int) and i >= 0]
        odd_pos = [x for x in pos if x % 2 != 0]
        even_pos = [x for x in pos if x % 2 == 0]
        return sum(x**2 for x in even_pos) == 2 * (
            sum(sum(map(lambda x: x**2, odd_pos))) + sum(map(lambda x: x**2, even_pos))
        )

    return g


print(check(lambda lst: double_the_difference(lst))(list(range(-3, 4))))