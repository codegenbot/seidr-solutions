def fuel_cost(fuel_costs):
    return sum(map(int, input().replace(" ", ",").split(","))) - sum(
        (
            math.floor(int(i) / 3) - 2
            for i in map(str, fuel_costs).replace(" ", "").split(",")
        )
    )