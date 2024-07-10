def fuel_cost():
"""Fuel cost calculator"""
arr = list(map(int, input().split()))
return sum(((n-2)//3) for n in arr)