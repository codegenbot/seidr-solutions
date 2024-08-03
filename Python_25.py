def calculate_total_sales(sales_data):
    total_sales = 0
    for day in sales_data:
        total_sales += sum(day)
    return total_sales