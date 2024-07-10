def fuel_cost(fuel_costs):
    return sum(
        map(
            int,
            map(
                lambda x: int(x) / 3 - 2 if int(x) > 0 else 0,
                [i for i in fuel_costs.replace(" ", "").split(",")],
            ),
        )
    )