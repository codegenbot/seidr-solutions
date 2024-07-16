def round_floats_to_ints(xs):
    return [round(x) for x in xs]

xs = list(map(float, input().split()))
print(round_floats_to_ints(xs))