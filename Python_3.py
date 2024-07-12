def below_zero(temperature_list) -> bool:
    if not temperature_list or len(temperature_list) == 0:
        print("Invalid input. Please try again.")
        return False

    return any(temp < 0 for temp in temperature_list)