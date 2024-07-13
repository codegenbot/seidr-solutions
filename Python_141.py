```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    first_part = file_name.split('.')[0].lstrip()
    if not first_part.isalpha():
        return 'No'
    second_part = file_name.split('.')[-1].lower()
    if second_part not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'