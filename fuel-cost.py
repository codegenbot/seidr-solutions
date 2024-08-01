def solve(fuel_costs):
    return sum((cost - 2) // 3 for cost in map(int, input().split()))