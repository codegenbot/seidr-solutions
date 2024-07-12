from typing import list

def below_zero(temperature_list: list) -> bool:
    return any(temp < 0 for temp in temperature_list)