def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    name, extension = file_name.rsplit('.', 1)
    if not name or not name[0].isalpha():
        return 'No'
    allowed_extensions = ['txt', 'exe', 'dll']
    if extension not in allowed_extensions:
        return 'No'
    return 'Yes'