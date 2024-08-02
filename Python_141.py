def file_name_check(file_name):
    if file_name.count('.') != 1:
        return 'No'
    name, ext = file_name.split('.')
    if not name or not name[0].isalpha() or len([c for c in name if c.isdigit()]) > 3:
        return 'No'
    if ext not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'