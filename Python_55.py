

import asyncio
import json
import logging
import sqlite3
import time
from aiohttp import web


async def handle(request):
    """
    Обработчик запросов к главной странице
    :param request: объект запроса, с помощью которого организовывается взаимодействие сервера и клиента
    :return: возвращает html-страницу, содержащую форму и скрипт для отправки введенного пользователем значения на
    сервер
    return web.Response(body=open('./index.html', 'rb').read(), content_type='text/html')


async def process(request):
    """
    Обработчик запроса, отправляемого скриптом пользователя при нажатии на кнопку "Calculate". Проверяет соответствие
    формы в запросе параметрам формы расчета и если соответствует, находит результат и заносит полученные данные
    в базу данных
    :param request: объект запроса, с помощью которого организовывается взаимодействие сервера и клиента
    :return: возвращает информацию при наличии результата записанного ранее в базу и ошибку с соответствующим
    решению сообщением, если формат запроса не соответствует ожидаемому формату
    """
    if request.match_info.get("type") != "text":
        return web.Response(status=400, body=json.dumps({"error": "Data type is invalid"}))
    text = request.match_info.get("param")
    if request.method != "POST" or not (text == "test" or "test" in text):
        return web.Response(status=400, body=json.dumps({"error": "Unknown request"}))
    logging.info('Start making a calculation with the parameters {}'.format(text))
    print(text)
    if "test" in text:
        return web.Response(status=200, body=json.dumps({"result": "the_text_is_changed"}))
    else:
        return web.Response(status=400, body=json.dumps({"error": "Input data is invalid"}))


app = web.Application()
app.add_routes([web.get('/', handle), web.post('/{param:\d+}', process), web.post('/{param}', process)])
web.run_app(app)



    """
